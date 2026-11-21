// FUN_00418700  00418700

int __fastcall FUN_00418700(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x464) + 0x80c) / 0x34;
  }
  else {
    iVar2 = *(int *)(DAT_007947e0 + 0x4ef4);
  }
  return iVar2;
}

