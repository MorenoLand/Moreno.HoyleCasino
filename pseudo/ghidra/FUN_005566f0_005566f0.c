// FUN_005566f0  005566f0

void __fastcall FUN_005566f0(int *param_1)

{
  switch(param_1[5]) {
  case 1:
    if (*(char *)(DAT_0162ee84 + 0x25) != '\0') {
      (**(code **)(*param_1 + 8))(2,0x14);
    }
    break;
  case 2:
    (**(code **)(*param_1 + 8))(3,0x3c);
    break;
  case 3:
    (**(code **)(*DAT_0079341c + 700))(0x14);
    (**(code **)(*param_1 + 8))(4,0x3c);
    break;
  case 4:
    FUN_00557ae0(0);
    (**(code **)(*param_1 + 8))(5,0x3c);
    break;
  case 5:
    (**(code **)(*DAT_0079341c + 0x2e4))(0);
    (**(code **)(*param_1 + 8))(6,0x3c);
    break;
  case 6:
    FUN_00557ae0(4);
    (**(code **)(*param_1 + 8))(7,0x3c);
    break;
  case 7:
    (**(code **)(*param_1 + 8))(4,0x5a);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\videopokerroom.cpp",0x16f);
  }
  return;
}

