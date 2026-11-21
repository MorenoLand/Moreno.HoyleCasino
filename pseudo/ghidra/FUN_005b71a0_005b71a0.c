// FUN_005b71a0  005b71a0

void __thiscall FUN_005b71a0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_8;
  
  *(undefined1 *)(param_1 + 0x68 + param_2 * 0x118 + param_3) = (undefined1)param_4;
  switch(param_4) {
  case 0:
  case 5:
  case 6:
    local_8 = 2;
    break;
  case 1:
  case 2:
    local_8 = 1;
    break;
  default:
    local_8 = 0;
  }
  FUN_005b73a0(param_2,local_8);
  return;
}

