// FUN_005d9180  005d9180

void FUN_005d9180(undefined4 param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *_Str1;
  undefined4 *puVar4;
  undefined **_Str2;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [52];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = FUN_005dcb00(param_1);
  if (((local_8 != 0) &&
      (((*(int *)(local_8 + 0x49c) == 0 || (cVar1 = FUN_005f54a0(), cVar1 == '\0')) &&
       (piVar2 = (int *)FUN_0063aac0(), *piVar2 != 0)))) && (*(int *)(local_8 + 0x20) != 0)) {
    if ((DAT_007947e4 != (int *)0x0) &&
       (cVar1 = (**(code **)(*DAT_007947e4 + 0x2c4))(param_1), cVar1 != '\0')) {
      iVar3 = FUN_00646f80();
      _Str2 = &PTR_006b27f8;
      _Str1 = (char *)(**(code **)(**(int **)(iVar3 + 400) + 0xb8))();
      iVar3 = strcmp(_Str1,(char *)_Str2);
      if ((iVar3 != 0) && (param_2 == '\0')) goto LAB_005d92d6;
    }
    puVar4 = (undefined4 *)FUN_005d5a90(local_50);
    local_48 = *puVar4;
    local_44 = puVar4[1];
    FUN_0064c8d0(local_48,local_44,local_40,1,1,1);
    iVar3 = FUN_00646f80();
    (**(code **)(**(int **)(iVar3 + 400) + 0xb4))(local_40);
  }
LAB_005d92d6:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

