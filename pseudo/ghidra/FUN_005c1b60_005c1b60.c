// FUN_005c1b60  005c1b60

void __fastcall FUN_005c1b60(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint local_50;
  int local_4c;
  int local_20;
  int local_18;
  
  (**(code **)(*param_1 + 0x28))();
  iVar5 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))();
  cVar4 = (**(code **)(*param_1 + 0x24))();
  if (cVar4 == '\0') {
    local_4c = FUN_005be3f0();
  }
  else {
    local_4c = 1;
  }
  local_18 = 0;
  iVar6 = (local_4c + 1) * 1000;
  for (local_20 = 1; local_20 <= *(int *)(*(int *)(param_1[1] + 0x10) + 8); local_20 = local_20 + 1)
  {
    bVar3 = false;
    cVar4 = (**(code **)(*param_1 + 0x30))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*param_1 + 0x28))();
      if (cVar4 != '\0') {
        cVar4 = (**(code **)(*param_1 + 0x24))();
        if (cVar4 == '\0') {
          iVar1 = param_1[1];
          FUN_005c9140();
          if (*(char *)(iVar1 + local_20 + 0x33) != '\0') {
            bVar3 = ((local_18 * iVar6) / local_4c + iVar5) % iVar6 < 1000;
            local_18 = local_18 + 1;
          }
        }
      }
    }
    else {
      bVar3 = local_20 <= *(int *)(param_1[1] + 0xc);
    }
    if (param_1[0xb] == 0) {
      local_50 = 0;
    }
    else {
      local_50 = param_1[0xc] - param_1[0xb] >> 2;
    }
    if (local_50 <= local_20 - 1U) {
      _invalid_parameter_noinfo();
    }
    piVar2 = *(int **)(param_1[0xb] + (local_20 - 1U) * 4);
    cVar4 = FUN_005f54e0();
    if ((cVar4 == '\0') || (bVar3)) {
      cVar4 = FUN_005f54e0();
      if ((cVar4 == '\0') && (bVar3)) {
        (**(code **)(*piVar2 + 0x74))();
      }
    }
    else {
      (**(code **)(*piVar2 + 0x70))();
    }
  }
  return;
}

