// FUN_005cfdf0  005cfdf0

void __thiscall FUN_005cfdf0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char local_8;
  undefined1 uStack_7;
  
  _local_8 = CONCAT11((char)((ushort)DAT_006b2b64 >> 8),*(undefined1 *)(param_2 + 0x14));
  cVar1 = FUN_0060c370(param_1);
  if ((((cVar1 == '\0') || (*(char *)(param_2 + 0x14) < '\x19')) ||
      (iVar2 = atoi(&local_8), iVar2 != 0)) || (iVar2 = strcmp(&local_8,"0"), iVar2 == 0)) {
    FUN_0060b7d0(param_2);
  }
  return;
}

