/* 7a. constexpr (constant expressions)

    This is the same as const, but only used for compile-time constant.

    Compile-time constant vs runtime constant
    -------------------------------------------
    There are 2 types of constants.
    - Runtime constants 
        are constant values that can only be known during runtime.
    Egs:
        function parameters
        cin's

    - Compile-time constants
        are constant values that are already defined in the program and can be known by the compiler during compiling.
        The compiler will use this to perform optimisation.

    A good practice is to use the constexpr keyword instead of const for compile-time constants
*/