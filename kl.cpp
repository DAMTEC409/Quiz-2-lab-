
#include <iostream>
using namespace std;
void countNumbers(int arr[], int &positive, int &negative, int &zero) {
    positive = 0;
    negative = 0;
    zero = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }
}

int sumPositive(int arr[]) {
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > 0)
            sum += arr[i];
    }

    return sum;

int sumNegative(int arr[]) {
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] < 0)
            sum += arr[i];
    }

    return sum;
}

double calculateAverage(int arr[]) {
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
void displayResults(int positive, int negative, int zero,
                    int posSum, int negSum, double average) {

    cout << "RESULTS " << endl;
    cout << "Positive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative << endl;
    cout << "Zero numbers: " << zero << endl;
    cout << "Sum of positive numbers: " << posSum << endl;
    cout << "Sum of negative numbers: " << negSum << endl;
    cout << "Average of all numbers: " << average << endl;
}

int main() {
    int arr[5];
    int positive, negative, zero;

    cout << "Enter 5 integer numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }
    countNumbers(arr, positive, negative, zero);

    int posSum = sumPositive(arr);
    int negSum = sumNegative(arr);
    double average = calculateAverage(arr)
    displayResults(positive, negative, zero,
                   posSum, negSum, average);

    return 0;
}
