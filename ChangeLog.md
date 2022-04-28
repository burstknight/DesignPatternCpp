# Change Log
This document is created to record all changes.

-------------------
## [Unrelease]
### Added
- Add the header file `includes/ObserverPattern.h` to define the class `myAbstractObserver` for observer pattern.
- Define the class `mySubject` for observer pattern.
- Implement all member methods of the class `mySubject`.
- Change the method `mySubject::notifyData()` from an abstract method to a instance method, and then implement it.
- Add example code `testObserverPattern` to test observer pattern.
- Add makefile to build this proejct.
- Add the header file `./includes/DesignPatternCpp.h` to include others header files.
- Add [include guard](https://en.wikipedia.org/wiki/Include_guard) into header files.

### Changed
- Rename the class from `myAbstractObserver` to `myObserverInterface`.
- Rename the class from `mySubjectInterface` to `mySubject` because this class is not an abstract class.

### Fixed
- The example `testObserverPattern` did not run because using the address of the local varialbe that is a pointer of the object of the class `myTestObserver` to register into the class `mySubject`.

## Removed

