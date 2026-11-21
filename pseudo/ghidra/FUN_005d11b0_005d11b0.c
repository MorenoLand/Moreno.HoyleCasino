// FUN_005d11b0  005d11b0

void __fastcall FUN_005d11b0(int *param_1)

{
  int iVar1;
  int iVar2;
  char local_6;
  
  do {
    local_6 = '\0';
    iVar1 = param_1[2];
    iVar2 = (**(code **)(*param_1 + 4))();
    if (iVar1 < iVar2) {
      local_6 = FUN_005d0ff0();
    }
  } while (local_6 != '\0');
  return;
}

