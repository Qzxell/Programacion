syntax on 
set ruler
set shiftwidth=4
set expandtab
set encoding=utf-8
set number relativenumber
filetype plugin indent on 


call plug#begin()
" The default plugin directory will be as follows:
"   - Vim (Linux/macOS): '~/.vim/plugged'
"   - Vim (Windows): '~/vimfiles/plugged'
"   - Neovim (Linux/macOS/Windows): stdpath('data') . '/plugged'
" You can specify a custom plugin directory by passing it as the argument
"   - e.g. `call plug#begin('~/.vim/plugged')`
"   - Avoid using standard Vim directory names like 'plugin'

" Make sure you use single quotes
" Shorthand notation; fetches https://github.com/junegunn/vim-easy-align
Plug 'junegunn/vim-easy-align'

" Any valid git URL is allowed
Plug 'https://github.com/junegunn/vim-github-dashboard.git'

" Multiple Plug commands can be written in a single line using | separators
Plug 'SirVer/ultisnips' | Plug 'honza/vim-snippets'

" On-demand loading
Plug 'preservim/nerdtree', { 'on': 'NERDTreeToggle' }
Plug 'tpope/vim-fireplace', { 'for': 'clojure' }

" Using a non-default branch
Plug 'rdnetto/YCM-Generator', { 'branch': 'stable' }

" Using a tagged release; wildcard allowed (requires git 1.9.2 or above)
Plug 'fatih/vim-go', { 'tag': '*' }

" Plugin options
Plug 'nsf/gocode', { 'tag': 'v.20150303', 'rtp': 'vim' }

" Plugin outside ~/.vim/plugged with post-update hook
Plug 'junegunn/fzf', { 'dir': '~/.fzf', 'do': './install --all' }

" Unmanaged plugin (manually installed and updated)
Plug '~/my-prototype-plugin'

" Initialize plugin system
" - Automatically executes `filetype plugin indent on` and `syntax enable`.
" cegax plugins
Plug 'sainnhe/gruvbox-material'
Plug 'ajmwagar/vim-deus'
Plug 'sheerun/vim-polyglot'
Plug 'morhetz/gruvbox'
Plug 'sainnhe/sonokai'
Plug 'preservim/nerdcommenter'
Plug 'ap/vim-buftabline'
Plug 'lifepillar/vim-solarized8'
Plug 'mhartington/oceanic-next'
Plug 'embark-theme/vim'
Plug 'sainnhe/everforest'
Plug 'itchyny/lightline.vim'
Plug 'airblade/vim-gitgutter'
Plug 'neoclide/coc.nvim', {'branch': 'release'}
Plug 'ap/vim-css-color'
Plug 'preservim/nerdtree'
Plug 'arcticicestudio/nord-vim'
Plug 'glepnir/oceanic-material'
Plug 'rebelot/kanagawa.nvim'

" Instalar Vimtex
Plug 'lervag/vimtex'
Plug 'dense-analysis/ale'

call plug#end()
" You can revert the settings after the call like so:
"   filetype indent off   " Disable file-type-specific indentation
"   syntax off            " Disable syntax highlighting

" Set C++ file type
autocmd BufNewFile,BufRead *.cpp set filetype=cpp

set hidden
nnoremap <C-P> :bnext<CR>
nnoremap <C-N> :bprev<CR>


" Compile and run C++ program in subshell
function! CompileAndRun()
  let fileName = expand('%')
  if fileName =~ '\.cpp$'
    let exeName = substitute(fileName, '\.cpp$', '', '')
    execute 'w | !g++ -std=c++11 -Wall -Wextra -Wpedantic -O2 -o ' . exeName . ' ' . fileName
    if v:shell_error == 0
      let cmd = "x-terminal-emulator -e bash -c './" . exeName . "; read -p \"Press enter to exit...\"'"
      call system(cmd)
      redraw!
    endif
  else
    echo 'Not a C++ file'
  endif
endfunction
 
" Map keys to compile and run current file
map <F5> :call CompileAndRun()<CR>
map <F9> :w<CR>:!clear<CR>:call CompileAndRun()<CR>


" Configurar Vimtex
let g:vimtex_compiler_latexmk = {
    \ 'build_dir' : '.',
    \ 'options' : ['-pdf', '-xelatex'],
    \ }

let g:vimtex_view_method = 'zathura'

