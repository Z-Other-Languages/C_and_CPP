void driver_program_using_reference()
{

    Derived_one obj_deriv_1;
    Derived_two obj_deriv_2;

    Base &obj_base_1 = obj_deriv_1;
    Base &obj_base_2 = obj_deriv_2;

    obj_base_1.display();
}