from manim import *

class CircleAndFunction(Scene):
    def construct(self):
        # Crear el círculo
        circle = Circle(radius=1, color=BLUE)
        self.play(Create(circle))

        # Esperar un momento
        self.wait(1)

        # Borrar el círculo
        self.play(FadeOut(circle))

        # Crear la gráfica de la función cuadrática x^2
        graph = self.get_graph(lambda x: x ** 2, x_min=-4, x_max=4)
        self.play(Create(graph))

        # Esperar un momento
        self.wait(1)

        # Borrar la gráfica
        self.play(FadeOut(graph))

        self.wait()

    def get_graph(self, function, x_min, x_max):
        graph = FunctionGraph(
            function,
            x_min=x_min,
            x_max=x_max,
            color=GREEN
        )
        graph.set_stroke(width=3)  # Ancho del trazo de la gráfica
        return graph

