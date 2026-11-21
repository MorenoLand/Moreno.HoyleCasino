// FUN_004191f0  004191f0

void __thiscall FUN_004191f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_8;
  
  *(undefined1 *)(param_1 + 0x110 + param_2 * 0x118 + param_3) = (undefined1)param_4;
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
  *(undefined4 *)(param_1 + 0x4f4 + param_2 * 4) = local_8;
  return;
}

