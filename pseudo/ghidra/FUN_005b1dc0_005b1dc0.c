// FUN_005b1dc0  005b1dc0

void FUN_005b1dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  
  if ((((param_4 == 0x33) || (param_4 == 0x34)) || (param_4 == 0x35)) || (param_4 == 0x36)) {
    piVar1 = (int *)FUN_005fb5e0(0x32);
    (**(code **)(*piVar1 + 0xf0))(0x3154f9,0);
  }
  else if (param_4 == 0x32) {
    switch(param_3) {
    case 0x3154f5:
      FUN_005b1930(0);
      break;
    case 0x3154f6:
      FUN_005b1930(1);
      break;
    case 0x3154f7:
      FUN_005b1930(2);
      break;
    case 0x3154f8:
      FUN_005b1930(3);
    case 0x3154f9:
      break;
    default:
      FUN_005e9f20("false","..\\Casino\\royalmatchroom.cpp",0x2cb);
    }
  }
  return;
}

