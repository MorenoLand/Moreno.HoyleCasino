// FUN_005c47b0  005c47b0

int __fastcall FUN_005c47b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_c [8];
  
  FUN_005c9140();
  iVar1 = *(int *)(param_1 + 4);
  puVar4 = local_c;
  FUN_005dcb00(0,puVar4);
  puVar2 = (undefined4 *)FUN_005d5a90(puVar4);
  iVar3 = FUN_005d0d30(*puVar2,puVar2[1]);
  return iVar3 + iVar1;
}

