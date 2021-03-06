# include <iostream>
# include <string>
# include <cstddef>

int reverse(int num){
    int ret = 0;
    while(num){
        ret = (ret * 10) + (num % 10);
        num /= 10;
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false); // increase c++ IO speed.
    int num1, num2;
    int count = 0;

    std::cin >> count;

    for(int i = 0; i < count; i++){
        std::cin >> num1 >> num2;
        std::cout << reverse(reverse(num1) + reverse(num2))<< '\n';
    }

}
