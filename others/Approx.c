#include <stdio.h>
#include <math.h>

int main() {
    float price, gst_rate, gst_amount, total_price;

    // Get price and GST rate from user
    printf("Enter the price: ");
    scanf("%f", &price);
    printf("Enter the GST rate (e.g., 18 for 18%%): ");
    scanf("%f", &gst_rate);

    // Calculate GST amount (round to nearest integer using ceil())
    gst_amount = ceil(price * (gst_rate / 100.0));  // Convert GST rate to decimal (is a math.h function)

    // Calculate total price (round to nearest integer using ceil())
    total_price = ceil(price + gst_amount);

    // Display results with appropriate formatting
    printf("Price (approx.): %.2f\n", price);
    printf("GST amount (approx.): %.2f\n", gst_amount);
    printf("Total price (approx.): %.2f\n", total_price);

    return 0;
}
