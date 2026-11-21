// FUN_00416bb0  00416bb0

void FUN_00416bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  
  if ((((param_4 == 0x33) || (param_4 == 0x34)) || (param_4 == 0x35)) || (param_4 == 0x36)) {
    piVar1 = (int *)FUN_005fb5e0(0x32);
    (**(code **)(*piVar1 + 0xf0))(0x30d7f9,0);
  }
  else if (param_4 == 0x32) {
    switch(param_3) {
    case 0x30d7f5:
      FUN_00416cc0(0);
      break;
    case 0x30d7f6:
      FUN_00416cc0(1);
      break;
    case 0x30d7f7:
      FUN_00416cc0(2);
      break;
    case 0x30d7f8:
      FUN_00416cc0(3);
    }
  }
  return;
}

