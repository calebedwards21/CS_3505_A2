/*
Caleb Edwards
CS 3505
A2
*/

class Spiral{

private:
  double _centerX, _centerY, _radius, _degrees, _textX, _textY, _textAngle, _angleAroundCircle;
  float _rad1, _rad2, _x, _y, _angle2;
  char buf[2];

public:

  Spiral(double centerX, double centerY, double radius, double degrees);
  // An overloaded operator++ which internally advances the spiral to its next position.
  // Operator++ is curious in that it handles two versions, ++obj and obj++. Research how
  // to do this and implement both. Your main program will likely not exercise both, so do some
  // temporary code to make sure this works. The next position should be suitable for the next
  // character of the text to be placed. This next position should be pleasing: text should not overlap
  // or be too spread out and the lines should have some spacing. This pleasant spacing should at least
  // work for spirals that fit on one 8.5 x 11in page. Note that this does mean that the spiral class is a
  // little specialized for spirals on a page, but we will skip making this more general purpose.
  // Spiral& operator++(int);
  void increment();

  // Angles should be reported as degrees. The getTextX and getTextY give the position on the page
  // of the current spiral point, and the TextAngle is the angle a letter should be printed at for the current spiral point.
  double getTextX();

  double getTextY();

  double getTextRadius();

  double getTextAngle();

  void placeText(double x, double y, double degrees);

  // An overloaded ostream << function which reports in a nicely formatted way the state
  //(such as angle and radius) of a Spiral object. Rely on users of this function to provide
  //any desired newlines after outputting the spiral object.
  //void operator<<();
};
