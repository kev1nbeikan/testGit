/*!
    \defgroup generate_mazes Генерация лабиринтов
    \ingroup maze
    \brief Данный модуль, предназначен для генерации лабиринтов.
    
     На данный момент он поддерживает следующие алгоритмы генерации лабиринтов: Eller's algorithm, randomized Kruskal's algorithm, cellular automaton algorithm, randomized Prim's algorithm.
*/
///@{
    /*! \brief Функция генерации лабиринта на основе алгоритма Эллера
         \param[in] width  делай деньги блять вот так
          \returns Лабиринт, представляющий собой экземпляр класса Maze с заданной шириной и высотой
     \code
          int gcd(int a, int b) {
                 int r;
                 while (b) {
                       r = a % b;
                       a = b;
                       b = r;
                 }
                 return r;
          }
          \endcode
    */


    Maze generateEller(int width=0, int height=1);


    /*! \brief Функция генерации лабиринта на основе вероятностного алгоритма Крускала
         \param width, height количество клеток в высоту и ширину в лабиринте
          \returns Лабиринт, представляющий собой экземпляр класса Maze с заданной шириной и высотой
    */
    Maze generateKruskal(int width, int height);

    /*! \brief Функция генерации лабиринта на основе вероятностного алгоритма Прима
         \param width, height количество клеток в высоту и ширину в лабиринте
          \returns Лабиринт, представляющий собой экземпляр класса Maze с заданной шириной и высотой
    */
    Maze generatePrim(int width, int height);

    /*! \brief Функция генерации лабиринта на основе клеточных автоматов
         \param width, height количество клеток в высоту и ширину в лабиринте
         \returns Лабиринт, представляющий собой экземпляр класса Maze с заданной шириной и высотой
    */
    Maze generateCellular(int width, int height);
///@}
