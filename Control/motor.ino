// motor.ino - 모터 제어 코드
#define MOTOR_PIN 9  // 모터 PWM 제어 핀
#define DIRECTION_PIN 8 // 모터 방향 제어 핀

void setup() {
    pinMode(MOTOR_PIN, OUTPUT);
    pinMode(DIRECTION_PIN, OUTPUT);
}

void loop() {
    // 전진 (Forward)
    digitalWrite(DIRECTION_PIN, HIGH);
    analogWrite(MOTOR_PIN, 128);  // PWM 값: 50% 속도
    delay(2000);

    // 정지 (Stop)
    analogWrite(MOTOR_PIN, 0);
    delay(1000);

    // 후진 (Backward)
    digitalWrite(DIRECTION_PIN, LOW);
    analogWrite(MOTOR_PIN, 128);  // PWM 값: 50% 속도
    delay(2000);

    // 정지 (Stop)
    analogWrite(MOTOR_PIN, 0);
    delay(1000);
}
