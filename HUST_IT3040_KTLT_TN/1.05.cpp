double* maximum(double* a, int size) {
    double* max;
    max = a;
    if (a == nullptr) return nullptr;
    for (int i = 0; i < size; i++)
    {
        if (*(a + i) > *max) max = a + i;
    }
    return max;
}