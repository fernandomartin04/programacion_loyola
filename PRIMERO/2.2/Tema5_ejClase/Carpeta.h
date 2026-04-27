template <typename T> class Carpeta {
    private: 
        T * datos;
        int n;
    public:
        Carpeta(int n){
            this->n = n;
            datos = new T[n];
        };
        ~Carpeta(){
            delete[] datos;
        };
        
        void modificar(int i, T dato){
            datos[i] = dato;
        };

        T operator[](const int i)
        {
            return datos[i];
        };
};