// FUN_00418460  00418460

bool FUN_00418460(void)

{
  int iVar1;
  
  iVar1 = FUN_00418400(0xffffffff);
  return *(char *)(iVar1 + 0xb) != '\0';
}

