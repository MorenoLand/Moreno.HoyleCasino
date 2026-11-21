// FUN_00418480  00418480

bool FUN_00418480(void)

{
  int iVar1;
  
  iVar1 = FUN_00418400(0xffffffff);
  return *(char *)(iVar1 + 0xc) != '\0';
}

