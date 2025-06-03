void setup()
{
    // Set pins 2 to 9 as INPUT for IR sensors
    pinMode(2, INPUT);
    pinMode(3, INPUT);
    pinMode(4, INPUT);
    pinMode(5, INPUT);
    pinMode(6, INPUT);
    pinMode(7, INPUT);
    pinMode(8, INPUT);
    pinMode(9, INPUT);
   
    // Set pins 10, 11, 12 and analog pins A0 to A4 as OUTPUT for relays
    pinMode(10, OUTPUT);
    digitalWrite(10, HIGH);  // Initialize relay pins to HIGH (relay OFF)
    pinMode(11, OUTPUT);
    digitalWrite(11, HIGH);  
    pinMode(12, OUTPUT);
    digitalWrite(12, HIGH);
    pinMode(A0, OUTPUT);
    digitalWrite(A0, HIGH);
    pinMode(A1, OUTPUT);
    digitalWrite(A1, HIGH);
    pinMode(A2, OUTPUT);
    digitalWrite(A2, HIGH);
    pinMode(A3, OUTPUT);
    digitalWrite(A3, HIGH);
    pinMode(A4, OUTPUT);
    digitalWrite(A4, HIGH);  
}

void loop()
{       
    // Check IR sensor at pin 2
    if(digitalRead(2) == 0)   // IR sensor triggered (active LOW)
    {
        digitalWrite(10, LOW); // Activate relay connected to pin 10
    }
    else
    {
        digitalWrite(10, HIGH); // Deactivate relay
    }

    // Check IR sensor at pin 3
    if(digitalRead(3) == 0)
    {
        digitalWrite(11, LOW);
    }
    else
    {
        digitalWrite(11, HIGH);
    }

    // Check IR sensor at pin 4
    if(digitalRead(4) == 0)
    {
        digitalWrite(12, LOW);
    }
    else
    {
        digitalWrite(12, HIGH);
    }

    // Check IR sensor at pin 5
    if(digitalRead(5) == 0)
    {
        digitalWrite(A0, LOW);
    }
    else
    {
        digitalWrite(A0, HIGH);
    }

    // Check IR sensor at pin 6
    if(digitalRead(6) == 0)
    {
        digitalWrite(A1, LOW);
    }
    else
    {
        digitalWrite(A1, HIGH);
    }

    // Check IR sensor at pin 7
    if(digitalRead(7) == 0)
    {
        digitalWrite(A2, LOW);
    }
    else
    {
        digitalWrite(A2, HIGH);
    }

    // Check IR sensor at pin 8
    if(digitalRead(8) == 0)
    {
        digitalWrite(A3, LOW);
    }
    else
    {
        digitalWrite(A3, HIGH);
    }

    // Check IR sensor at pin 9
    if(digitalRead(9) == 0)
    {
        digitalWrite(A4, LOW);
    }
    else
    {
        digitalWrite(A4, HIGH);
    }

    delay(200); // Small delay to stabilize readings
}
