// FUN_0042a4a0  0042a4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0042a4a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005eb220();
  if (*(int *)(DAT_007906d4 + 0xac4) == 0) {
    (**(code **)(**(int **)(param_1 + 0x15c) + 0xb0))(0);
    switch(param_2) {
    case 4:
      (**(code **)(**(int **)(param_1 + 0x15c) + 0x44))(0x65,0x45);
      break;
    case 5:
      (**(code **)(**(int **)(param_1 + 0x15c) + 0x44))(0x9a,0x45);
      break;
    case 6:
      (**(code **)(**(int **)(param_1 + 0x15c) + 0x44))(0xd0,0x45);
      break;
    default:
      (**(code **)(**(int **)(param_1 + 0x15c) + 0xb0))(1);
      (**(code **)(**(int **)(param_1 + 0x15c) + 0x44))(0x2f,0x45);
      break;
    case 8:
      (**(code **)(**(int **)(param_1 + 0x15c) + 0x44))(0x108,0x45);
      break;
    case 9:
      (**(code **)(**(int **)(param_1 + 0x15c) + 0x44))(0x140,0x45);
      break;
    case 10:
      (**(code **)(**(int **)(param_1 + 0x15c) + 0x44))(0x177,0x45);
    }
    iVar2 = FUN_005eb220();
    if ((iVar2 == 0) && (iVar1 == 1)) {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x18a9a,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    iVar2 = FUN_005eb220();
    if ((iVar2 == 1) && (iVar1 != 1)) {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x18a9a,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
  }
  else if ((*(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0) == 7) ||
          (*(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0) ==
           *(int *)(DAT_007906d4 + 0xac4))) {
    iVar1 = FUN_005eb220();
    if (iVar1 == 0) {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x18a9a,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    (**(code **)(**(int **)(param_1 + 0x15c) + 0xb0))(1);
    (**(code **)(**(int **)(param_1 + 0x15c) + 0x44))(0x2f,0x45);
  }
  return;
}

