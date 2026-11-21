// FUN_0058d1a0  0058d1a0

void __thiscall FUN_0058d1a0(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined **_Str2;
  char local_8;
  undefined1 uStack_7;
  
  _local_8 = CONCAT11((char)((ushort)DAT_006b2b64 >> 8),*(undefined1 *)(param_2 + 0x14));
  bVar1 = false;
  if (((((*(char *)(param_2 + 0x14) == '\x06') || (*(char *)(param_2 + 0x14) == '\x05')) ||
       (*(char *)(param_2 + 0x14) == '\x03')) ||
      ((*(char *)(param_2 + 0x14) == '\x04' || (*(char *)(param_2 + 0x14) == '\x17')))) ||
     (*(char *)(param_2 + 0x14) == '\x16')) {
    bVar1 = true;
  }
  if (!bVar1) {
    iVar2 = atoi(&local_8);
    if ((iVar2 == 0) && (iVar2 = strcmp(&local_8,"0"), iVar2 != 0)) {
      return;
    }
    pcVar3 = (char *)(**(code **)(*param_1 + 0xb8))();
    iVar2 = atoi(pcVar3);
    if (10 < iVar2) {
      return;
    }
    pcVar3 = (char *)(**(code **)(*param_1 + 0xb8))();
    iVar2 = atoi(pcVar3);
    if ((iVar2 == 10) && (iVar2 = strcmp(&local_8,"0"), iVar2 != 0)) {
      return;
    }
  }
  FUN_0060b7d0(param_2);
  if (*(char *)(param_2 + 4) != '\0') {
    _Str2 = &PTR_006b27f8;
    pcVar3 = (char *)(**(code **)(*param_1 + 0xb8))();
    iVar2 = strcmp(pcVar3,(char *)_Str2);
    if (iVar2 == 0) {
      FUN_00585aa0(0);
    }
    else {
      pcVar3 = (char *)(**(code **)(*param_1 + 0xb8))();
      iVar2 = atoi(pcVar3);
      FUN_00585aa0(iVar2);
    }
  }
  return;
}

