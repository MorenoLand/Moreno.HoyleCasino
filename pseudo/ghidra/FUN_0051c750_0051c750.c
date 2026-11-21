// FUN_0051c750  0051c750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0051c750(int param_1,int param_2)

{
  switch(param_2) {
  case 0:
    FUN_0051c860();
    break;
  case 1:
    FUN_0060cce0(1);
    break;
  case 2:
    FUN_0051cab0();
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x30e7fa,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    *(int *)(param_1 + 0x1c0) = param_2 + -3;
    FUN_0051c700(*(undefined4 *)(param_1 + 0x1c0));
    FUN_0051c040();
  }
  return;
}

