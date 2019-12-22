1) ----------------------------------------------------------------------------------------------
private void set_mode(bool mod)
{
    label1.Enabled=mod;
    button1.Enabled=mod;
    button2.Enabled=mod;
    button3.Enabled=!mod;
    button4.Enabled=!mod;
}
2) ----------------------------------------------------------------------------------------------
return m_driverStatusNames[driver.Status];
3) ----------------------------------------------------------------------------------------------
uint i;
...
if (i/10)
{
...
}
4) ----------------------------------------------------------------------------------------------
string destination.copy(Source)
5) ----------------------------------------------------------------------------------------------
Bool IsNumber (string str) {
return isDigit(str);
}
6) ----------------------------------------------------------------------------------------------
foreach (DirectoryInfo dir in dirs.GetDirectories())
{
//create folder{16}
stream.Write(new byte[] { (byte)NetworkMessage.MakeDir }, 0, 1);
stream.Read(new byte[1],0, 1);
stream.Write(BitConverter.GetBytes(Encoding.UTF8.GetBytes(SubFolder.Replace('\\', '/') + dir.Name.Replace('\\', '/')).Length),
                                   0);
stream.Write(Encoding.UTF8.GetBytes(SubFolder.Replace('\\', '/') + dir.Name.Replace('\\', '/')),
            0,
            Encoding.UTF8.GetBytes(SubFolder.Replace('\\', '/') + dir.Name.Replace('\\', '/')).Length);
//send folder name
stream.Read(new byte[1], 0, 1);//Ok
}
7) ----------------------------------------------------------------------------------------------
String[] days = new String[7] {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
8) ----------------------------------------------------------------------------------------------
Console.WriteLine("--"DateTime.Now.ToString()"--");
9) ----------------------------------------------------------------------------------------------
return (modf(Counter) == 0);
10) ----------------------------------------------------------------------------------------------
if (!Connected)
    rez = setup();
fl_end = true;
11) ----------------------------------------------------------------------------------------------
List<int> arr = new List<int>();
12) ----------------------------------------------------------------------------------------------
var ids = form.Keys;
if(ids.Length >= 0)
    throw Exception;
13) ----------------------------------------------------------------------------------------------
//Use the Name field
string[] nameParts = customer.Name.Split(' ');
string firstName = nameParts[0];
string lastName = nameParts[1];
14) ----------------------------------------------------------------------------------------------
sourceId = Convert.ToInt32(sourceIDs.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries)[0]);
15) ----------------------------------------------------------------------------------------------
public string generateEMail()
{
    string res = PersonName.Split(" ")[0] + "." + PersonName;
    if (res.Length > 20)
    {
        res.SetLength(20);
    }
    res += "@domain.ua";
    return res;
}
16) ----------------------------------------------------------------------------------------------
sourceId = Convert.ToInt32(sourceIDs.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries)[0]);
17) ----------------------------------------------------------------------------------------------
string GetTextDiv2(string text)
{
    int mid = text.Length / 2;
    int r = text.IndexOf(" ", mid);
    if (r < 0) r = 5000;
    int l = text.IndexOf(" ", 0, mid);
    if (l < 0) l = 5000;

    if (r  >  l) // to left is closer
        mid = l;
    else
        mid = r;
    if (mid == 5000)
        return "&nbsp" + text;

    return "&nbsp" + text.Substring(0, mid) + " <br/>&nbsp" + text.Substring(mid, text.Length - mid);
}
18) ----------------------------------------------------------------------------------------------
private static readonly char SPECIFIER = "$"[0];
private static readonly char DELIMITER = ":"[0];
19) ----------------------------------------------------------------------------------------------
string mailTo = Config.GetSetting("AdminNotifications_EmailAddress");
if(mailTo == null)
    mailTo = Globals.GetHostPortalSettings().HostSettings["SMTPPassword"].ToString();
20) ----------------------------------------------------------------------------------------------
public bool CheckPath(string path)
{
int n;
n = 0;
//Проверяем наличие нужных папок;
return Directory.Exists(path + "SCLAD") &&
       Directory.Exists(path + "REAL") &&
       Directory.Exists(path + "DOSTAVKA") &&
       File.Exists(path + "analit.dbf") &&
       File.Exists(path + "partner.dbf") &&
       File.Exists(path + "SCLAD\\mdoc.dbf") &&
       File.Exists(path + "SCLAD\\mdoc.fpt") &&
       File.Exists(path + "SCLAD\\mdocm.dbf") &&
       File.Exists(path + "SCLAD\\mgrup.dbf") &&
       File.Exists(path + "SCLAD\\mlabel.dbf") &&
       File.Exists(path + "SCLAD\\mlabel.fpt") &&
       File.Exists(path + "REAL\\rbookm.dbf") &&
       File.Exists(path + "REAL\\rbook.dbf") &&
       File.Exists(path + "REAL\\rbook.fpt") &&
       File.Exists(path + "DOSTAVKA\\avt.dbf") &&
       File.Exists(path + "DOSTAVKA\\avtm.dbf") &&
       File.Exists(path + "DOSTAVKA\\avtm.fpt") &&
       File.Exists(path + "DOSTAVKA\\cargo.dbf") &&
       File.Exists(path + "DOSTAVKA\\cargom.dbf") &&
       File.Exists(path + "DOSTAVKA\\zamena.dbf");
}
21) ----------------------------------------------------------------------------------------------
txtContacts.Text = String.Join(contacts, ';');
22) ----------------------------------------------------------------------------------------------
Game1.clou = !Game1.clou;
