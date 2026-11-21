// FUN_004a2100  004a2100

char * __thiscall
FUN_004a2100(char *param_1,char *param_2,char *param_3,byte *param_4,byte *param_5,byte *param_6,
            byte *param_7)

{
  *param_1 = *param_2 + *param_3;
  *(ushort *)(param_1 + 2) =
       (ushort)*param_4 * 0x1000 + (ushort)*param_5 * 0x100 + (ushort)*param_6 * 0x10 +
       (ushort)*param_7;
  return param_1;
}

