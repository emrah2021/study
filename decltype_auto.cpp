template<typename Container, typename Index>
decltype(auto) getAndAccess(Container& c, Index i)
{
    return c[i];
}

int main()
{   
    std::vector<int> v = { 1, 3, 7, 9, 11, 22, 35 }; 
    getAndAccess(v,3) = 10;
    cout << getAndAccess(v,3) << endl;
  
  return 0;
}
