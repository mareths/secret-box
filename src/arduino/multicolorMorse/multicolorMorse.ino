int redPin= 7;
int greenPin = 6;
int bluePin = 5;
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  /* Test Led */
  setRed();
  delay(1000);
  setGreen();
  delay(1000);
  setBlue();
  delay(1000);
  setPurple();
  delay(1000);
  turnOff();
  delay(2000);
  
}

void loop() {

  /* Démarrage de la sequence du code
   * Le code à trouver étant 1 2 3
  */
  
  setStart();
  setCinq(false);
  setUn(true);
  setDeux(true);
  setZero(false);
  setHuit(false);
  setTrois(true);
  delay(2000);

}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}

void setRed() {
  setColor(255, 0, 0);
}

void setGreen() {
  setColor(0, 255, 0);
}

void setBlue() {
  setColor(0, 0, 255);
}

void setPurple() {
  setColor(170, 0, 255);
}

void setWhite() {
  setColor(255, 255, 255);
}

void turnOff() {
  setColor(0, 0, 0);
}

void trait(char color) {
  switch (color) {
    case 'r':
      setRed();
      break;
    case 'g':
      setGreen();
      break;
    case 'b':
      setBlue();
      break;
    case 'p':
      setPurple();
      break;
    default:
      setWhite();
      break;
  }
  delay(2500);
  turnOff();
  delay(1000);
}

void point(char color) {
  switch (color) {
    case 'r':
      setRed();
      break;
    case 'g':
      setGreen();
      break;
    case 'b':
      setBlue();
      break;
    case 'p':
      setPurple();
      break;
    default:
      setWhite();
      break;
  }
  delay(1000);
  turnOff();
  delay(1000);
}

/*
 * Vrai code Couleur
 * 
 * Start .-.-. Violet 
 * 0 ----- Bleu
 * 1 .---- Rouge
 * 2 ..--- Vert
 * 3 ...-- Rouge
 * 4 ....- Vert
 * 5 ..... Bleu
 * 6 -.... Vert
 * 7 --... Rouge
 * 8 ---.. Bleu
 * 9 ----. Vert
 * 
 */

void setStart() {
  char color = 'p';

  point(color);
  trait(color);
  point(color);
  trait(color);
  point(color);
  delay(2000);
}

void setZero(bool verite) {
  char color = 'b';
  if (!verite) {
    long randNumber = random(2);
    if (randNumber) {
      color = 'r';
    } else {
      color = 'g';
    }
  }

  trait(color);
  trait(color);
  trait(color);
  trait(color);
  trait(color);
  delay(2000);
}

void setUn(bool verite) {
  char color = 'r';
  if (!verite) {
    long randNumber = random(2);
    if (randNumber) {
      color = 'g';
    } else {
      color = 'b';
    }
  }

  point(color);
  trait(color);
  trait(color);
  trait(color);
  trait(color);
  delay(2000);
}

void setDeux(bool verite) {
  char color = 'g';
  if (!verite) {
    long randNumber = random(2);
    if (randNumber) {
      color = 'r';
    } else {
      color = 'b';
    }
  }

  point(color);
  point(color);
  trait(color);
  trait(color);
  trait(color);
  delay(2000);
}

void setTrois(bool verite) {
  char color = 'r';
  if (!verite) {
    long randNumber = random(2);
    if (randNumber) {
      color = 'g';
    } else {
      color = 'b';
    }
  }

  point(color);
  point(color);
  point(color);
  trait(color);
  trait(color);
  delay(2000);
}

void setQuatre(bool verite) {
  char color = 'g';
  if (!verite) {
    long randNumber = random(2);
    if (randNumber) {
      color = 'r';
    } else {
      color = 'b';
    }
  }

  point(color);
  point(color);
  point(color);
  point(color);
  trait(color);
  delay(2000);
}

void setCinq(bool verite) {
  char color = 'b';
  if (!verite) {
    long randNumber = random(2);
    if (randNumber) {
      color = 'r';
    } else {
      color = 'g';
    }
  }

  point(color);
  point(color);
  point(color);
  point(color);
  point(color);
  delay(2000);
}

void setSix(bool verite) {
  char color = 'g';
  if (!verite) {
    long randNumber = random(2);
    if (randNumber) {
      color = 'r';
    } else {
      color = 'b';
    }
  }

  trait(color);
  point(color);
  point(color);
  point(color);
  point(color);
  delay(2000);
}

void setSept(bool verite) {
  char color = 'r';
  if (!verite) {
    long randNumber = random(2);
    if (randNumber) {
      color = 'g';
    } else {
      color = 'b';
    }
  }

  trait(color);
  trait(color);
  point(color);
  point(color);
  point(color);
  delay(2000);
}

void setHuit(bool verite) {
  char color = 'b';
  if (!verite) {
    long randNumber = random(2);
    if (randNumber) {
      color = 'r';
    } else {
      color = 'g';
    }
  }

  trait(color);
  trait(color);
  trait(color);
  point(color);
  point(color);
  delay(2000);
}

void setNeuf(bool verite) {
  char color = 'g';
  if (!verite) {
    long randNumber = random(2);
    if (randNumber) {
      color = 'r';
    } else {
      color = 'b';
    }
  }

  trait(color);
  trait(color);
  trait(color);
  trait(color);
  point(color);
  delay(2000);
}
