# Activity 28
### In this activity, I basically extract the code from the image and basically export most of main into a function.
```C++
//Code from the image in question
int main() {
  double number= 12.34;
  stringstream stream;
  stream<<fixed<< setprecision(1)<<number;
  string str= stream.str();
  cout<<str<<endl;
  return 0;
}
```

This code is my implementation.
```C++
string convertDoubleToString(stringstream& stream, double number) {
    stream << fixed << setprecision(1) << number;
    string str = stream.str();
    return str;
}
```
### Output
```
12.3

```
