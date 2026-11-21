// FUN_0043fe60  0043fe60

void __fastcall FUN_0043fe60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_30;
  undefined1 local_28 [28];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar4 = FUN_0064c8a0(0,0);
  local_30 = (int)uVar4;
  local_8 = 0;
  do {
    if (4 < local_8) {
      if (local_30 == 0) {
        (**(code **)(**(int **)(param_1 + 0x9c) + 0x70))();
      }
      else {
        FUN_0064c8d0(local_30,(int)((ulonglong)uVar4 >> 0x20),local_28,1,1,1);
        (**(code **)(**(int **)(param_1 + 0x9c) + 0xb4))(local_28);
        (**(code **)(**(int **)(param_1 + 0x9c) + 0x74))();
      }
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(DAT_007906f0 + 0x44 + local_8 * 0x78) == -1) {
LAB_0043ff73:
      (**(code **)(**(int **)(param_1 + 0x20 + local_8 * 4) + 0x70))();
    }
    else {
      iVar2 = FUN_00445a00(local_8);
      if (iVar2 == 0) goto LAB_0043ff73;
      (**(code **)(**(int **)(param_1 + 0x20 + local_8 * 4) + 0x74))();
      iVar2 = *(int *)(DAT_007906f0 + local_8 * 0x78 + 0x50 +
                      *(int *)(DAT_007906f0 + 0x44 + local_8 * 0x78) * 8);
      iVar1 = *(int *)(DAT_007906f0 + local_8 * 0x78 + 0x54 +
                      *(int *)(DAT_007906f0 + 0x44 + local_8 * 0x78) * 8);
      iVar3 = FUN_00445a00(local_8);
      local_30 = (iVar3 * iVar2) / iVar1 + local_30;
    }
    local_8 = local_8 + 1;
  } while( true );
}

