// FUN_00421070  00421070

void __fastcall FUN_00421070(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 uVar5;
  char local_24 [16];
  uint local_14;
  char local_10 [4];
  int local_c;
  int local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  iVar1 = FUN_00427560();
  local_10[0] = '\0';
  local_10[1] = 0;
  iVar2 = FUN_0062fbf0(4);
  if (iVar2 < 2) {
    uVar3 = FUN_0062fbf0(3);
    (**(code **)(**(int **)(param_1 + 4) + 0xb0))(uVar3);
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x74))();
  local_24[0] = '\0';
  _itoa(iVar1,local_24,10);
  sVar4 = strlen(local_24);
  iVar1 = FUN_0062fbf0(2);
  if (iVar1 != 0) {
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      uVar3 = FUN_0062fbf0(3);
      (**(code **)(**(int **)(param_1 + 8 + local_c * 4) + 0xb0))(uVar3);
    }
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x74))();
  if ((int)sVar4 < 7) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x70))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
  }
  uVar3 = 0;
  if ((int)sVar4 < 10) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x70))();
    iVar1 = extraout_EDX_00;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x74))();
    iVar1 = extraout_EDX;
  }
  uVar5 = 0;
  local_c = sVar4 - 1;
  while (-1 < local_c) {
    local_10[0] = local_24[local_c];
    iVar1 = FUN_0062fbf0(3);
    FUN_005eaf00(iVar1 + 0x3106de);
    iVar1 = atoi(local_10);
    (**(code **)(**(int **)(param_1 + 0x14 + local_8 * 4) + 0xb0))(iVar1);
    (**(code **)(**(int **)(param_1 + 0x14 + local_8 * 4) + 0x74))();
    local_8 = local_8 + 1;
    iVar1 = local_c + -1;
    local_c = iVar1;
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,iVar1,uVar5,uVar3);
  return;
}

