#ifndef MATRICES_H
#define MATRICES_H


class Matrices
{
    public:
        Matrices();
        virtual ~Matrices();

        int vector1 Get[3][3]() { return [3][3]; }
        void Set[3][3](int vector1 val) { [3][3] = val; }
        int vector2 Get[3][3]() { return [3][3]; }
        void Set[3][3](int vector2 val) { [3][3] = val; }
        int vectorR Get[3][3]() { return [3][3]; }
        void Set[3][3](int vectorR val) { [3][3] = val; }

    protected:

    private:
        int vector1 [3][3];
        int vector2 [3][3];
        int vectorR [3][3];
};

#endif // MATRICES_H
