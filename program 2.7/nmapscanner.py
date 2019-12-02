import nmap
nm = nmap.PortScanner()
nm.scan('127.0.0.1','0-445')
nm.command_line()
nm.scaninfo()
nm.all_hosts()
nm['127.0.0.1'].hostname()
nm['127.0.0.1'].state()
nm['127.0.0.1'].all_protocols()
nm['127.0.0.1']['tcp'].keys()
nm['127.0.0.1'].has_tcp(22)
nm['127.0.0.1'].has_tcp(23)

nm['127.0.0.1']['tcp'][22]
nm['127.0.0.1'].tcp(22)
nm['127.0.0.1']['tcp'][22]['state']



for host in nm.all_hosts():
    print('--------------------')
    print('host : %s (%s)' % ( host,nm[host].hostnmae()))
    print('state : %s' % nm[host].state())
    for proto in nm[host].all_protocols():
        print('-----------')
        print('protocol : %s' % proto)

        lport = nm[host][proto].keys()
        lport.sort()
        for port in lport:
                   print('port : %s\tstate : %s' % (port,nm[host][proto][port]['state']))



print(nm.csv())
nm.scan(hosts='192.168.22.0/24',argument='-n -sP -PE -PA21,23,80,3389')
hosts_list = [(x,nm[x]['status']['state']) for x in nm.all_hosts()]

for host,status in hosts_list:
                   print('{0}:{1}'.host)





nma =nmap.PortScannerAsync()

def callback_result(host,scan_result):
                   print'---------'
                   print host,scan_result

nma.scan(host='192.168.22.0/30',argument='-sP',callback=callback_result)
while nma.still_scanning():
            print ("waiting >>>")
            nma.wait(2)


                   
nm = nmap.PortScannerYield()
for progressive_result in nm.scan('127.0.0.1/24' , '22-25'):
                                  print(progressive_result)
