
unsigned int potencia(unsigned int base, unsigned int expo) {
    int result;
    if (expo == 0) {
        return 1;
    }
    result = base*potencia(base,expo-1);
    return result;
}
