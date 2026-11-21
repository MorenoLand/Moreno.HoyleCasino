// FUN_004c7820  004c7820

void __thiscall FUN_004c7820(int param_1,char param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int local_10;
  
  uVar1 = FUN_004c70d0();
  local_10 = FUN_0060c9a0();
  while (local_10 = local_10 + -1, -1 < local_10) {
    piVar2 = (int *)FUN_004c72f0(*(undefined4 *)(param_1 + 8),local_10);
    switch(uVar1) {
    case 2:
    case 3:
    case 4:
    case 5:
      iVar3 = FUN_0060c9a0(*(int *)(param_1 + 0x14) + 8);
      (**(code **)(*piVar2 + 0x44))
                (((iVar3 + -1) - local_10) * 0xd + -0x55 + *(int *)(param_1 + 0x10));
      break;
    case 0xffffffff:
    case 0:
    case 1:
    case 6:
    case 7:
      iVar3 = FUN_0060c9a0(*(int *)(param_1 + 0x14) + 8);
      (**(code **)(*piVar2 + 0x44))
                (((iVar3 + -1) - local_10) * 0xd + 0x56 + *(int *)(param_1 + 0x10));
    }
    if (param_2 == '\0') {
      (**(code **)(*piVar2 + 0x6c))(0xd - local_10);
    }
    else {
      (**(code **)(*piVar2 + 0x6c))(0x68 - local_10);
    }
    (**(code **)(*piVar2 + 0x74))();
  }
  return;
}

