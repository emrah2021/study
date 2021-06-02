template<typename T, std::size_t N>
constexpr std::size_t arraySize(T (&)[N])
{
    return N;
}

int main()
{
    int keyVals[] = { 1, 3, 7, 9, 11, 22, 35 }; 

    cout << arraySize(keyVals) << endl;
    int mappedVals[arraySize(keyVals)];
  
  return 0;
}
