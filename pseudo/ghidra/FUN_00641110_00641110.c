// FUN_00641110  00641110

void __thiscall FUN_00641110(int param_1,undefined1 param_2,char *param_3)

{
  if (*(char *)(param_1 + 0x1cc) == '\x02') {
    *(undefined1 *)(param_1 + 0x1cd) = param_2;
  }
  else {
    strcpy((char *)(DAT_01630690 + 0x1ce),param_3);
  }
  return;
}

