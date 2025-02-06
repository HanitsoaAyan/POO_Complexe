namespace com
{
    class Complexe
    {
        private:
            int real;
            int imaginary;
        public:
            Complexe(); // Constructeur 
            ~Complexe(); // Destructeur 

            // Accesseur (getteurs)
            int getReal();
            int getImaginary();

            // Modificateur (setteurs)
            void setReal(int);
            void setImaginary(int);

            //Méthodes
            Complexe addition(Complexe );
            Complexe soustraction(Complexe);
            Complexe multiplication(Complexe);
                
    };
}