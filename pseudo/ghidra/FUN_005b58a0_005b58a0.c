// FUN_005b58a0  005b58a0

int __fastcall FUN_005b58a0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x57c) + 0x80c) / 0x34;
  }
  else {
    iVar2 = *(int *)(DAT_007947e0 + 0x4ef4);
  }
  return iVar2;
}

