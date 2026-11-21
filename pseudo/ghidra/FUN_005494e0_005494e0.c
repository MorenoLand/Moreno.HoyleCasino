// FUN_005494e0  005494e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005494e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  switch(param_2) {
  case 0:
    FUN_005d0f00();
    FUN_00545410(0,0x14);
    FUN_00544b90();
    FUN_00545bb0();
    iVar1 = param_1[2];
    iVar2 = (**(code **)(*param_1 + 4))();
    if (iVar1 == iVar2) {
      FUN_005491f0();
    }
    break;
  case 1:
    FUN_005d1210();
    FUN_00545410(0,0x14);
    FUN_00544b90();
    FUN_00545bb0();
    if (param_1[2] != 0) {
      FUN_005491f0();
    }
    break;
  case 2:
    FUN_005d13e0();
    (**(code **)(*DAT_0162ee84 + 0x80))(0x18a88,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    if (*(char *)((int)param_1 + 0x4d) == '\0') {
      FUN_00544d20();
    }
    else {
      FUN_005452a0();
    }
    FUN_00545aa0();
    break;
  case 3:
    FUN_00545410(0,0x14);
    FUN_00549470();
  }
  return;
}

