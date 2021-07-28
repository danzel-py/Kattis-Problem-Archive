fun main(args : Array<String>){
    var n = readLine()!!.toInt()
    var mapY : MutableMap< Int?, Int? > = HashMap() 
    var mapN : MutableMap< Int?, Int? > = HashMap() 
    for(i in 1..3){
        mapN[i] = 0
        mapY[i] = 0
    }
    var cY = 0
    var cN = 0
    for (i in 1..n) {
        var str = readLine()!!
        if(str[0] == 'Y'){
            cY++
            for(j in 1..3){
                if(str[j] == 'Y'){
                    mapY[j] = mapY[j]!! + 1
                }
            }
        }else{
            cN++
            for (j in 1..3) {
                if(str[j] == 'Y'){
                    mapN[j] = mapN[j]!! + 1
                }
            }
        }

    }
    for(i in 1..3){
        var a = mapY[i]!!.toDouble()/cY
        var b = mapN[i]!!.toDouble()/cN
        if(a<b){
            println((1-(a/b))*100)
        }else{
            println("not effective")
        }
    }
}