// FUN_00443690  00443690

undefined4 __thiscall FUN_00443690(int *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_8;
  undefined1 uStack_7;
  
  _local_8 = CONCAT11((char)((ushort)DAT_006b2b64 >> 8),*(undefined1 *)(param_2 + 0x14));
  cVar1 = FUN_0060c370();
  if ((cVar1 != '\0') && (*(char *)(param_2 + 0x14) == '\t')) {
    return 1;
  }
  cVar1 = FUN_0060c370();
  if ((cVar1 == '\0') || (cVar1 = FUN_0060b7a0(param_2), cVar1 == '\0')) {
    return 0;
  }
  if (*(char *)(param_2 + 0x14) != '\x16') {
    pcVar2 = (char *)(**(code **)(*param_1 + 0xb8))();
    iVar3 = atoi(pcVar2);
    if ((iVar3 == 0) && (iVar3 = strcmp(&local_8,"0"), iVar3 == 0)) {
      return 0;
    }
    pcVar2 = (char *)(**(code **)(*param_1 + 0xb8))();
    iVar3 = atoi(pcVar2);
    if (100 < iVar3) {
      return 0;
    }
    pcVar2 = (char *)(**(code **)(*param_1 + 0xb8))();
    iVar3 = atoi(pcVar2);
    if ((iVar3 == 100) && (iVar3 = strcmp(&local_8,"0"), iVar3 != 0)) {
      return 0;
    }
    iVar3 = atoi(&local_8);
    if ((iVar3 == 0) && (iVar3 = strcmp(&local_8,"0"), iVar3 != 0)) {
      return 0;
    }
  }
  return 1;
}

