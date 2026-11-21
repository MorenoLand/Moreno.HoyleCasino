// FUN_0043fc80  0043fc80

void __thiscall FUN_0043fc80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char local_14 [12];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar6 = 0;
  uVar3 = FUN_00445a00(param_2);
  uVar5 = FUN_0064c8a0(uVar3,uVar6);
  iVar1 = *(int *)(DAT_007906f0 + 0x44 + param_2 * 0x78);
  iVar2 = *(int *)(DAT_007906f0 + param_2 * 0x78 + 0x50 + iVar1 * 8);
  iVar4 = *(int *)(DAT_007906f0 + param_2 * 0x78 + 0x54 + iVar1 * 8);
  if (iVar1 == -1) {
    (**(code **)(**(int **)(param_1 + 0x70 + param_2 * 4) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x84 + param_2 * 4) + 0x70))();
  }
  else {
    sprintf(local_14,"%d - %d",iVar2,iVar4);
    (**(code **)(**(int **)(param_1 + 0x70 + param_2 * 4) + 0xb4))(local_14);
    (**(code **)(**(int **)(param_1 + 0x70 + param_2 * 4) + 0x74))();
    iVar4 = ((int)uVar5 * iVar2) / iVar4;
    if (iVar4 == 0) {
      (**(code **)(**(int **)(param_1 + 0x84 + param_2 * 4) + 0x70))();
    }
    else {
      FUN_0064c8d0(iVar4,(int)((ulonglong)uVar5 >> 0x20),local_14,1,1,1);
      (**(code **)(**(int **)(param_1 + 0x84 + param_2 * 4) + 0xb4))(local_14);
      (**(code **)(**(int **)(param_1 + 0x84 + param_2 * 4) + 0x74))();
    }
  }
  FUN_0043fe60();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

