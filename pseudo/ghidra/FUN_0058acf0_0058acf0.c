// FUN_0058acf0  0058acf0

void __fastcall FUN_0058acf0(int param_1)

{
  char cVar1;
  int iVar2;
  char *_Format;
  undefined4 uVar3;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_0058a530();
  if (iVar2 < 100) {
    cVar1 = FUN_00585eb0();
    if (cVar1 == '\0') {
      if (*(int *)(param_1 + *(int *)(param_1 + 0x3c08) * 0xe10 + 0x344 +
                  (*(int *)(param_1 + 0x3bf4 + *(int *)(param_1 + 0x3c08) * 4) + -1) * 0x24) == 0) {
        FUN_0058dfb0(*(int *)(param_1 + 0x3bf4 + *(int *)(param_1 + 0x3c08) * 4) + -1);
        FUN_005857a0();
      }
      else {
        *(int *)(param_1 + 0x3bf4 + *(int *)(param_1 + 0x3c08) * 4) =
             *(int *)(param_1 + 0x3bf4 + *(int *)(param_1 + 0x3c08) * 4) + 1;
        *(int *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4) =
             *(int *)(param_1 + 0x3bf4 + *(int *)(param_1 + 0x3c08) * 4) + -1;
        *(undefined1 *)
         (param_1 + 0x328 + *(int *)(param_1 + 0x3c08) * 0xe10 +
         *(int *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4) * 0x24) = 0xff;
        FUN_0058dfb0(*(undefined4 *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4));
      }
    }
    else {
      FUN_005857a0();
    }
  }
  else {
    _Format = (char *)FUN_00630f40("SID_KENO_MAXTICKETS_MESSAGE",100);
    sprintf(local_10c,_Format);
    uVar3 = FUN_00630f40("SID_KENO_MAXTICKETS_TITLE",0);
    FUN_0062ff10(local_10c,uVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

