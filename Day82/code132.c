/*Define an enum for traffic lights (RED, YELLOW, GREEN) 
and print 'Stop', 'Wait', or 'Go' based on its value.*/

#include <stdio.h>
#include <string.h>

// Define enum for traffic lights
typedef enum { RED, YELLOW, GREEN, INVALID } TrafficLight;

// Define struct mapping color name to enum
typedef struct 
{
 const char *name;
TrafficLight light;

} LightMap;

// struct Array mapping strings to enum values
LightMap map[] = {{"RED", RED}, {"YELLOW", YELLOW}, {"GREEN", GREEN}};

// Array mapping enum to action
const char *actions[] = { "Stop", "Wait", "Go" };

// Function to get enum value from input string
TrafficLight getLight(const char *input)
 {
    for (int i = 0; i < 3; i++)
     {
        if (strcmp(input, map[i].name) == 0)
            return map[i].light;
    }
    return INVALID;
}

int main()
 {
    char input[10];

    printf("Enter traffic light color (RED, YELLOW, GREEN): ");
    scanf("%s", input);

    TrafficLight light = getLight(input);

    if (light != INVALID) 
       printf("Action: %s\n", actions[light]);
     else 
        printf("Invalid input.\n");

    return 0;
}