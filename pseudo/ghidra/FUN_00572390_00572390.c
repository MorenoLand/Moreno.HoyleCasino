// FUN_00572390  00572390

void __thiscall FUN_00572390(undefined4 param_1,int param_2,undefined4 param_3)

{
  switch(param_2 + -0x30ef5a) {
  case 0:
    (**(code **)(**(int **)(DAT_00793450 + 0x18) + 0xc0))();
    break;
  case 1:
    (**(code **)(**(int **)(DAT_00793450 + 0x14) + 0xc0))();
    break;
  case 2:
    (**(code **)(**(int **)(DAT_00793450 + 0x10) + 0xc0))();
    break;
  case 3:
    (**(code **)(**(int **)(DAT_00793450 + 0xc) + 0xc0))();
    break;
  case 4:
    (**(code **)(**(int **)(DAT_00793450 + 8) + 0xc0))(param_2 + -0x30ef5a,param_1);
    break;
  default:
    FUN_005dc7d0(param_2,param_3);
  }
  return;
}

