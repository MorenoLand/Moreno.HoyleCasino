// FUN_005dfff0  005dfff0

void FUN_005dfff0(undefined4 param_1,int param_2)

{
  char *_Str2;
  char *_Str1;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_8;
  
  if (param_2 == 0x17) {
    _Str2 = (char *)FUN_00630f40("SID_CASINO_WIZARDS_ALLOFF");
    FUN_005fb300(0x17);
    _Str1 = (char *)FUN_00602b70();
    iVar1 = strcmp(_Str1,_Str2);
    if (iVar1 == 0) {
      for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
        piVar2 = (int *)FUN_005fb350(local_8 + 7);
        (**(code **)(*piVar2 + 0xf8))();
      }
      piVar2 = (int *)FUN_005fb300(0x17);
      uVar3 = FUN_00630f40("SID_CASINO_WIZARDS_ALLON");
      (**(code **)(*piVar2 + 0xe0))(uVar3);
    }
    else {
      for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
        piVar2 = (int *)FUN_005fb350(local_8 + 7);
        (**(code **)(*piVar2 + 0xf4))();
      }
      piVar2 = (int *)FUN_005fb300(0x17);
      uVar3 = FUN_00630f40("SID_CASINO_WIZARDS_ALLOFF");
      (**(code **)(*piVar2 + 0xe0))(uVar3);
    }
  }
  return;
}

