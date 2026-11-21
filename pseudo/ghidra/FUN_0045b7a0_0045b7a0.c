// FUN_0045b7a0  0045b7a0

void __fastcall FUN_0045b7a0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *_Format;
  undefined4 uVar3;
  undefined4 local_120 [5];
  char local_10c [256];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_120[0] = 2;
  local_120[1] = 1;
  local_120[2] = 3;
  local_120[3] = 0;
  local_120[4] = 4;
  FUN_00460ee0(param_1);
  *(undefined4 *)(DAT_00790738 + 0x10c) = 4;
  local_8 = FUN_004607e0();
  if ((local_8 != -1) && (local_8 != 4)) {
    cVar1 = FUN_00460640(local_8);
    if (cVar1 != '\0') {
      FUN_005dcb00(local_8);
      iVar2 = FUN_0063aac0();
      _Format = (char *)FUN_00630f40("SID_PAIGOWPOKER_ASKTOBEBANKER_FORMAT",iVar2 + 4);
      sprintf(local_10c,_Format);
      uVar3 = FUN_00630f40("SID_PAIGOWPOKER_PLAYBANKER",4);
      iVar2 = FUN_0062ff10(local_10c,uVar3);
      if (iVar2 == 6) {
        *(int *)(DAT_00790738 + 0x10c) = local_8;
      }
    }
  }
  cVar1 = FUN_0045f990();
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(DAT_00790740 + 0x50) + 0x70))();
  }
  else {
    iVar2 = FUN_00460700();
    (**(code **)(**(int **)(DAT_00790740 + 0x50) + 0xb0))(local_120[iVar2]);
    (**(code **)(**(int **)(DAT_00790740 + 0x50) + 0x74))();
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

